#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import json
import re
import readline

# Configs
FILENAME = 'kamigo.json'
NAME = '卡米狗'

my_dict = None

# Strings
cmd_learn = '學'
cmd_forget = '忘記'
cmd_list = '你會說什麼'
cmd_bye = '再見'

msg_done = '好哦~好哦~'
msg_list = '這裡教我說'
msg_bye = '拜拜~'

msg_help = [
    '真的是拿你沒辦法呢...',
    '你可以這樣教我說話',
    f'- {NAME}{cmd_learn};你好嗎;我很好'
]

IFS = '[;；\s　]+'

# Console Colors
GREY = '\033[90m'
GREEN = '\033[92m'
BLUE = '\033[94m'
CYAN = '\033[96m'
BOLD = '\033[1m'
ENDC = '\033[0m'


# Helpers
def load_dict():
    global my_dict
    with open(FILENAME, encoding='utf8') as f:
        my_dict = json.load(f)

def save_dict():
    global my_dict
    with open(FILENAME, 'w', encoding='utf8') as f:
        json.dump(my_dict, f, indent=4, sort_keys=True, ensure_ascii=False)

def completer(text, state):
    global my_dict
    CMD = my_dict.keys()
    CMD = [*CMD, *(NAME + x for x in [cmd_learn, cmd_forget, cmd_learn, cmd_bye])]
    options = [cmd + ' ' for cmd in CMD if cmd.startswith(text)]

    if state < len(options):
        return options[state]
    else:
        return None

readline.parse_and_bind("tab: complete")
readline.set_completer(completer)

def say(msg):
    print(f'{GREEN}{NAME}: {BOLD}{msg}{ENDC}')

def main():
    global my_dict
    load_dict()

    while True:
        try:
            msg = input(f'{GREY}> {ENDC}{BOLD}')
        except:
            print(f'{ENDC}')  # Clear color with newline
            say(msg_bye)
            break
        finally:
            print(f'{ENDC}', end='')

        msg = msg.strip()

        if len(msg) == 0:
            continue

        msg = msg.replace('卡咪狗', '卡米狗')

        m = re.match(f'^(?:{NAME}\s*)?{cmd_learn}{IFS}([^;；]+){IFS}(.+)', msg)
        if m:
            my_dict[m.group(1)] = m.group(2)  # May override preivous dict
            say(msg_done)
            continue

        m = re.match(f'^(?:{NAME}\s*)?{cmd_forget}{IFS}(.+)', msg)
        if m:
            my_dict.pop(m.group(1), None)  # Not guaranteed to exists
            say(msg_done)
            continue

        if re.match(f'^(?:{NAME}\s*)?{cmd_list}', msg):
            say(msg_list)
            print((f'\n{GREY}' + '-'*10 + f'{ENDC}\n')
                .join([f'{BLUE}{k}{ENDC};{BLUE}{v}{ENDC}' for (k, v) in my_dict.items()]))
            continue

        if re.match(f'^(?:{NAME}\s*)?{cmd_bye}', msg):
            say(msg_bye)
            break  # Exit

        if msg in my_dict:  # Prevent override command
            resp = my_dict[msg]
            say(resp)
            continue

        # Fallback
        for resp in msg_help:
            say(resp)
    # End while loop

    save_dict()


if __name__ == '__main__':
    main()
