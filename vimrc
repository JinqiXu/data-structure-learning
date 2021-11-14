"===========================Vundle环境设置=================================

set nocompatible "vim比vi支持更多功能，如showcmd，避免冲突和副作用

filetype off

set rtp+=~/.vim/bundle/Vundle.vim

set rtp+=~/.vim/plugin/clang_complete.vim

"vundle管理的插件列表必须位于vundle#begin()和vundle#end()之间

call vundle#begin()



"避免PluginClean把自己卸载了

Plugin 'VundleVim/Vundle.vim'

Plugin 'rip-rip/clang_complete'



Plugin 'scrooloose/nerdtree'



Plugin 'altercation/vim-colors-solarized'



Plugin 'majutsushi/tagbar'



Plugin 'vim-scripts/taglist.vim'



Plugin 'vim-airline/vim-airline'



Plugin 'godlygeek/tabular'



Plugin 'Valloric/YouCompleteMe'



Plugin 'w0rp/ale'

Plugin 'Chiel92/vim-autoformat'



"插件列表结束

call vundle#end()

filetype plugin indent on

set ai





" All system-wide defaults are set in $VIMRUNTIME/debian.vim and sourced by

" the call to :runtime you can find below.  If you wish to change any of those

" settings, you should do it in this file (/etc/vim/vimrc), since debian.vim

" will be overwritten everytime an upgrade of the vim packages is performed.

" It is recommended to make changes after sourcing debian.vim since it alters

" the value of the 'compatible' option.



runtime! debian.vim



" Vim will load $VIMRUNTIME/defaults.vim if the user does not have a vimrc.

" This happens after /etc/vim/vimrc(.local) are loaded, so it will override

" any settings in these files.

" If you don't want that to happen, uncomment the below line to prevent

" defaults.vim from being loaded.

" let g:skip_defaults_vim = 1



" Uncomment the next line to make Vim more Vi-compatible

" NOTE: debian.vim sets 'nocompatible'.  Setting 'compatible' changes numerous

" options, so any other options should be set AFTER setting 'compatible'.

"set compatible



" Vim5 and later versions support syntax highlighting. Uncommenting the next

" line enables syntax highlighting by default.

if has("syntax")

    syntax on

endif



" If using a dark background within the editing area and syntax highlighting

" turn on this option as well

"set background=dark



" Uncomment the following to have Vim jump to the last position when

" reopening a file

"au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif



" Uncomment the following to have Vim load indentation rules and plugins

" according to the detected filetype.

"filetype plugin indent on



" The following are commented out as they cause vim to behave a lot

" differently from regular Vi. They are highly recommended though.

set showcmd " Show (partial) command in status line.

set showmatch " Show matching brackets.

set ignorecase " Do case insensitive matching

set smartcase " Do smart case matching

set incsearch

set autowrite

set hidden " Hide buffers when they are abandoned

set mouse=a " Enable mouse usage (all modes)



" Source a global configuration file if available

if filereadable("/etc/vim/vimrc.local")

    source /etc/vim/vimrc.local

endif

set number

set hidden

set nocompatible

syntax on

set showmode

set showcmd

set showmatch

set smartcase

set autowrite

set encoding=utf-8

set t_Co=256



set autoindent

set tabstop=4

set shiftwidth=4

set expandtab

set softtabstop=2

set cursorline

set textwidth=80

set wrap

set laststatus=2

set showmatch

set ruler

set hlsearch

set smartcase

set spell spelllang=en_us

set undofile

set visualbell

set cindent

set smartindent



syntax enable

set background=light

set background=dark



inoremap ' ''<ESC>i
inoremap " ""<ESC>i
inoremap ( ()<ESC>i
inoremap [ []<ESC>i
inoremap { {<CR>}<ESC>O



let g:solarized_termtrans  = 1       " 使用 termnal 背景

let g:solarized_visibility = "high"   " 使用 :set list 显示特殊字符时的高亮级别



set t_Co=256

set background=dark



"set background=light



" 主题设置为 solarized

colorscheme solarized



let g:clang_complete_copen=1

let g:clang_periodic_quickfix=0

let g:clang_snippets=1

let g:clang_user_options='-std=c99 -stdlib=libc++ -std=c++11 -IIncludePath'

let g:clang_auto_select=1

let g:clang_close_preview=1

let g:clang_complete_macros=1

let g:clang_use_library=1

let g:clang_library_path="/usr/lib/llvm-10/lib"

let g:neocomplcache_enable_at_startup=1



let NERDTreeHighlightCursorline = 1       " 高亮当前行

let NERDTreeShowLineNumbers     = 1       " 显示行号

" 忽略列表中的文件

let NERDTreeIgnore = [ '\.pyc$', '\.pyo$', '\.obj$', '\.o$', '\.egg$', '^\.git$', '^\.repo$', '^\.svn$', '^\.hg$' ]

" 启动 vim 时打开 NERDTree

autocmd vimenter * NERDTree

" 当打开 VIM，没有指定文件时和打开一个目录时，打开 NERDTree

autocmd StdinReadPre * let s:std_in = 1

autocmd VimEnter * if argc() == 0 && !exists("s:std_in") | NERDTree | endif

autocmd VimEnter * if argc() == 1 && isdirectory(argv()[0]) && !exists("s:std_in") | exe 'NERDTree' argv()[0] | wincmd p | ene | exe 'cd '.argv()[0] | endif

" 关闭 NERDTree，当没有文件打开的时候

autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTreeType") && b:NERDTreeType == "primary") | q | end



" <leader>nt 打开 nerdtree 窗口，在左侧栏显示

map <leader>nt :NERDTreeToggle<CR>

" <leader>tc 关闭当前的 tab

map <leader>tc :tabc<CR>

" <leader>to 关闭所有其他的 tab

map <leader>to :tabo<CR>

" <leader>ts 查看所有打开的 tab

map <leader>ts :tabs<CR>

" <leader>tp 前一个 tab

map <leader>tp :tabp<CR>

" <leader>tn 后一个 tab

map <leader>tn :tabn<CR>



let g:tagbar_ctags_bin = 'ctags' " tagbar 依赖 ctags 插件

let g:tagbar_width     = 30      " 设置 tagbar 的宽度为 30 列，默认 40 列

let g:tagbar_autofocus = 1       " 打开 tagbar 时光标在 tagbar 页面内，默认在 vim 打开的文件内

let g:tagbar_left      = 1       " 让 tagbar 在页面左侧显示，默认右边

let g:tagbar_sort      = 0       " 标签不排序，默认排序



" <leader>tb 打开 tagbar 窗口，在左侧栏显示

map <leader>tb :TagbarToggle<CR>



let Tlist_Show_One_File           = 1    " 只显示当前文件的tags

let Tlist_GainFocus_On_ToggleOpen = 1    " 打开 Tlist 窗口时，光标跳到 Tlist 窗口

let Tlist_Exit_OnlyWindow         = 1    " 如果 Tlist 窗口是最后一个窗口则退出 Vim

let Tlist_Use_Left_Window         = 1    " 在左侧窗口中显示

let Tlist_File_Fold_Auto_Close    = 1    " 自动折叠

let Tlist_Auto_Update             = 1    " 自动更新



" <leader>tl 打开 Tlist 窗口，在左侧栏显示

map <leader>tl :TlistToggle<CR>


let g:airline_powerline_fonts                   = 1 " 使用 powerline 打过补丁的字体

let g:airline#extensions#tabline#enabled        = 1 " 开启 tabline

let g:airline#extensions#tabline#buffer_nr_show = 1 " 显示 buffer 编号

let g:airline#extensions#ale#enabled            = 1 " enable ale integration



" 状态栏显示图标设置

if !exists('g:airline_symbols')

    let g:airline_symbols = {}

endif

let g:airline_left_sep          = '⮀'

let g:airline_left_alt_sep      = '⮁'

let g:airline_right_sep         = '⮂'

let g:airline_right_alt_sep     = '⮃'

let g:airline_symbols.crypt     = '?'

let g:airline_symbols.linenr    = '⭡'

let g:airline_symbols.branch    = '⭠'

" 切换 buffer

nnoremap [b :bp<CR>

nnoremap ]b :bn<CR>



" 关闭当前 buffer

noremap <C-x> :w<CR>:bd<CR>

" <leader>1~9 切到 buffer1~9

map <leader>1 :b 1<CR>

map <leader>2 :b 2<CR>

map <leader>3 :b 3<CR>

map <leader>4 :b 4<CR>

map <leader>5 :b 5<CR>

map <leader>6 :b 6<CR>

map <leader>7 :b 7<CR>

map <leader>8 :b 8<CR>

map <leader>9 :b 9<CR>



let g:ycm_global_ycm_extra_conf='~/.vim/bundle/YouCompleteMe/third_party/ycmd/cpp/ycm/.ycm_extra_conf.py'



let g:ycm_show_diagnostics_ui = 1    " 开启实时错误或者warning的检测

let g:ycm_add_preview_to_completeopt = 0    " 关闭补全预览

" 允许 vim 加载 .ycm_extra_conf.py 文件，不再提示

let g:ycm_confirm_extra_conf = 0

" 补全内容不以分割子窗口形式出现，只显示补全列表

set completeopt-=preview

" 补全功能在注释中同样有效

let g:ycm_complete_in_comments=1

" 开启 YCM 标签补全引擎

let g:ycm_collect_identifiers_from_tags_files=1

" YCM 集成 OmniCppComplete 补全引擎，设置其快捷键

inoremap <leader>; <C-x><C-o>

" 从第一个键入字符就开始罗列匹配项

let g:ycm_min_num_of_chars_for_completion=1

" 禁止缓存匹配项，每次都重新生成匹配项

let g:ycm_cache_omnifunc=0

" 语法关键字补全

let g:ycm_seed_identifiers_with_syntax=1



" 错误标记

let g:ycm_error_symbol = '✗'  "set error or warning signs



" warning标记



let g:ycm_warning_symbol = '⚠'



"highlight YcmErrorSign       标记颜色

"highlight YcmWarningSign ctermbg=none

"highlight YcmErrorSection      代码中出错字段颜色

highlight YcmWarningSection ctermbg=none

"highlight YcmErrorLine        出错行颜色

"highlight YcmWarningLine



let g:ale_lint_on_text_changed       = 'normal'                     " 代码更改后启动检查

let g:ale_lint_on_insert_leave       = 1                            " 退出插入模式即检查

let g:ale_sign_column_always         = 1                            " 总是显示动态检查结果

let g:ale_sign_error                 = '>>'                         " error 告警符号

let g:ale_sign_warning               = '--'                         " warning 告警符号

let g:ale_echo_msg_error_str         = 'E'                          " 错误显示字符

let g:ale_echo_msg_warning_str       = 'W'                          " 警告显示字符

let g:ale_echo_msg_format            = '[%linter%] %s [%severity%]' " 告警显示格式



" C 语言配置检查参数

let g:ale_c_gcc_options              = '-Wall -Werror -O2 -std=c11'

let g:ale_c_clang_options            = '-Wall -Werror -O2 -std=c11'

let g:ale_c_cppcheck_options         = ''

" C++ 配置检查参数

let g:ale_cpp_gcc_options            = '-Wall -Werror -O2 -std=c++14'

let g:ale_cpp_clang_options          = '-Wall -Werror -O2 -std=c++14'

let g:ale_cpp_cppcheck_options       = ''



"使用clang对c和c++进行语法检查，对python使用pylint进行语法检查


" <F9> 触发/关闭代码动态检查

map <F9> :ALEToggle<CR>

"普通模式下，ak 前往上一个错误或警告，aj 前往下一个错误或警告

nmap ak <Plug>(ale_previous_wrap)

nmap aj <Plug>(ale_next_wrap)

" ad 查看错误或警告的详细信息

nmap ad :ALEDetail<CR>



let g:ycm_global_ycm_extra_conf='~/.ycm_extra_conf.py'



let g:ycm_confirm_extra_conf = 0

colorscheme solarized

""noremap <F3> :Autoformat<CR>
""let g:autoformat_verbosemode=1

au BufWrite * :Autoformat

set noundofile
set nobackup
set noswapfile

