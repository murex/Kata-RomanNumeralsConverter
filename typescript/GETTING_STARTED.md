# Getting Started with Roman Numerals Converter kata in Typescript

## Prerequisites

- macOS, Linux or Windows
- [git](https://git-scm.com/) client
- [curl](https://curl.se/download.html) command line utility
- [node](https://nodejs.org/en/download)
- [yarn](https://classic.yarnpkg.com/lang/en/docs/install)
  <details><summary>Details</summary>

  You can install node directly or through nvm.

  </details>

## Getting ready

### 1 - Clone the kata repository

```shell
git clone https://github.com/murex/Kata-RomanNumeralsConverter.git
```

### 2 - Go to the kata's `typescript` directory

```shell
cd Kata-RomanNumeralsConverter/typescript
```

### 3 - Download dependencies

The kata uses `corepack` when configuring `yarn` as the package manager to be used.
You may need to run the following command beforehand to enable it:

> ***Note***: depending on your environment you may need to run this command
> as an administrator (Windows) or with sudo (Linux and macOS)

```shell
corepack enable
```

To download the dependencies:

```shell
corepack yarn install
```

## Running the kata

You can run the kata from the command line or from your IDE of choice.

You may also run it using [TCR](../tcr/TCR.md) if you want to add a bit of spice.

- [From a terminal](#running-the-kata-from-a-terminal)
- [From a terminal with TCR](#running-the-kata-from-a-terminal-with-tcr)
- [From WebStorm](#running-the-kata-from-webstorm)
- [From WebStorm with TCR](#running-the-kata-from-webstorm-with-tcr)
- [From IntelliJ](#running-the-kata-from-intellij)
- [From IntelliJ with TCR](#running-the-kata-from-intellij-with-tcr)
- [From Visual Studio Code](#running-the-kata-from-visual-studio-code)
- [From Visual Studio Code with TCR](#running-the-kata-from-visual-studio-code-with-tcr)

<a name="running-the-kata-from-a-terminal"/></a>

### Running the kata from a terminal

> ***Reminder***: the command below should be run from [Kata-RomanNumeralsConverter/typescript](.) directory

To run the tests:

```shell
yarn jest
```

<a name="running-the-kata-from-a-terminal-with-tcr"/></a>

### Running the kata from a terminal with TCR

> ***Note to Windows users***
>
> Use a **git bash** terminal for running the command below.
> _Windows CMD and PowerShell are not supported_

Type the following to start TCR:

```shell
./tcrw
```

Refer to [Using TCR](#using-tcr) section for additional details about TCR and available options.

<a name="running-the-kata-from-webstorm"/></a>

### Running the kata from WebStorm

Open WebStorm and select:

`File` > `Open` > `Kata-RomanNumeralsConverter` > `typescript`

Run all the tests in the project.

The "**Run**" tool window should display all the executed tests.

<a name="running-the-kata-from-webstorm-with-tcr"/></a>

### Running the kata from WebStorm with TCR

TCR is provided as a command line utility running in a terminal.
You can run it from WebStorm directly, through leveraging on its built-in terminal.

#### 1. Open the kata

Open WebStorm and select:

`File` > `Open` > `Kata-RomanNumeralsConverter` > `typescript`

#### 2. Turn off auto-save

TCR is constantly watching the filesystem for changes.
For this reason you need to turn off WebStorm's auto-save in order for it to behave as expected.

`File` > `Settings` > `Appearance & Behavior` > `System Settings`

Under `Autosave` section, uncheck the 2 following options:

- [ ] Save files if the IDE is idle for ___ seconds
- [ ] Save files when switching to a different application or a built-in terminal

#### 3. Configure the built-in terminal to run git bash

> ***Windows Only***
>
> Skip this step if you're on macOS or Linux

WebStorm for Windows is usually set up to run PowerShell by default in its built-in terminal.
TCR does not run in PowerShell.

`File` > `Settings` > `Tools` > `Terminal`

Under `Application Settings` section, set the `Shell path` to `C:\Program Files\Git\bin\bash.exe`

The above path is for a default git installation location. You may need to adjust it in case you have installed git at a
different location.

#### 4. Open a built-in terminal

`View` > `Tool Windows` > `Terminal`

#### 5. Launch TCR

> ***Reminder***: the command below should be run from [Kata-RomanNumeralsConverter/typescript](.) directory

From the built-in terminal:

```shell
./tcrw
```

Refer to [Using TCR](#using-tcr) section for additional details about TCR and available options.

<a name="running-the-kata-from-intellij"/></a>

### Running the kata from IntelliJ

> ***Important***: This requires to have `IntelliJ IDEA Ultimate` edition.
>
> IntelliJ's Javascript and Typescript plugin is not available with the Community edition.
> You can still use it as an editor for Typescript files, but you will not
> be able to use the benefits brought by the Javascript and Typescript plugin, such as syntax highlighting,
> code refactoring or integration with IntelliJ's test navigator.

Open IntelliJ and select:

`File` > `Open` > `Kata-RomanNumeralsConverter` > `typescript`

Run all the tests in the project.

The "**Run**" tool window should display all the executed tests.

<a name="running-the-kata-from-intellij-with-tcr"/></a>

### Running the kata from IntelliJ with TCR

> ***Important***: This requires to have `IntelliJ IDEA Ultimate` edition.
>
> IntelliJ's Javascript and Typescript plugin is not available with the Community edition.
> You can still use it as an editor for Typescript files, but you will not
> be able to use the benefits brought by the Javascript and Typescript plugin, such as syntax highlighting,
> code refactoring or integration with IntelliJ's test navigator.

TCR is provided as a command line utility running in a terminal.
You can run it from IntelliJ directly, through leveraging on its built-in terminal.

#### 1. Open the kata

Open IntelliJ and select:

`File` > `Open` > `Kata-RomanNumeralsConverter` > `typescript`

#### 2. Turn off auto-save

TCR is constantly watching the filesystem for changes.
For this reason you need to turn off IntelliJ's auto-save in order for it to behave as expected.

`File` > `Settings` > `Appearance & Behavior` > `System Settings`

Under `Autosave` section, uncheck the 2 following options:

- [ ] Save files if the IDE is idle for ___ seconds
- [ ] Save files when switching to a different application or a built-in terminal

#### 3. Configure the built-in terminal to run git bash

> ***Windows Only***
>
> Skip this step if you're on macOS or Linux

IntelliJ for Windows is usually set up to run PowerShell by default in its built-in terminal.
TCR does not run in PowerShell.

`File` > `Settings` > `Tools` > `Terminal`

Under `Application Settings` section, set the `Shell path` to `C:\Program Files\Git\bin\bash.exe`

The above path is for a default git installation location. You may need to adjust it in case you have installed git at a
different location.

#### 4. Open a built-in terminal

`View` > `Tool Windows` > `Terminal`

#### 5. Launch TCR

> ***Reminder***: the command below should be run from [Kata-RomanNumeralsConverter/typescript](.) directory

From the built-in terminal:

```shell
./tcrw
```

Refer to [Using TCR](#using-tcr) section for additional details about TCR and available options.

<a name="running-the-kata-from-visual-studio-code"/></a>

### Running the kata from Visual Studio Code

Open Visual Studio Code, choose `Open Folder`, navigate to `Kata-RomanNumeralsConverter` / `typescript`
then click `Select Folder`.

In order to run the tests, select `View` > `Testing`, then click on the `Play` button.

<a name="running-the-kata-from-visual-studio-code-with-tcr"/></a>

### Running the kata from Visual Studio Code with TCR

TCR is provided as a command line utility running in a terminal.
You can run it from Visual Studio Code directly, through leveraging on its built-in terminal.

#### 1. Open the kata

Open Visual Studio Code, choose `Open Folder`, navigate to `Kata-RomanNumeralsConverter` / `typescript`
then click `Select Folder`.

#### 2. Turn off auto-save

TCR is constantly watching the filesystem for changes.
For this reason you need to make sure that Visual Studio Code's auto-save is turned off
in order for TCR to behave as expected.

`File` > `Preferences` > `Settings`

In `Text Editor` > `Files` section, make sure that `Auto Save` setting is set to `off`

#### 3. Configure the built-in terminal to run git bash

> ***Windows Only***
>
> Skip this step if you're on macOS or Linux

Visual Studio Code for Windows is usually set up to run PowerShell by default in its built-in terminal.
TCR does not run in PowerShell.

`File` > `Preferences` > `Settings`

In `Features` > `Terminal` section, set `External: Windows Exec`
to `C:\Program Files\Git\bin\bash.exe`

The above path is for a default git installation location. You may need to adjust it in case you have installed git at a
different location.

#### 4. Open a built-in terminal

`Terminal` > `New Terminal`

#### 5. Launch TCR

> ***Reminder***: the command below should be run from [Kata-RomanNumeralsConverter/typescript](.) directory

From the built-in terminal:

```shell
./tcrw
```

Refer to [Using TCR](#using-tcr) section for additional details about TCR and available options.

<a name="using-tcr"/></a>

## Using TCR

### Cheat Sheet

Here are the main shortcuts available once TCR utility is running:

| Shortcut  | Description                                  |
|-----------|----------------------------------------------|
| `o` / `O` | Open in browser (with `web` subcommand only) |
| `d` / `D` | Enter driver role                            |
| `n` / `N` | Enter navigator role                         |
| `t` / `T` | Query timer status                           |
| `p` / `P` | Toggle on/off git auto-push                  |
| `l` / `L` | Pull from remote                             |
| `s` / `S` | Push to remote                               |
| `a` / `A` | Abort current command (when in driver role)  |
| `q` / `Q` | Quit current role / Quit TCR                 |
| `?`       | List available options                       |

### Additional Details

Refer to [TCR - Test && Commit || Revert](../tcr/TCR.md) page
for additional details and explanations about TCR utility.
