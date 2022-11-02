TEMPLATE = subdirs
SUBDIRS = \
          signAProtocol\
          signALib\
          signAChart\
          signACommonUI\
          signAScience\
          signACoreFun\
          signAPlugin/FunPlugin \
          signAPlugin/TextImport \
          signAPlugin/DsfFileImport \
          SARibbonBar/SARibbon/src/SARibbonBar \
          signA \



TRANSLATIONS+= \
            translations/zh.ts\#chinese
            translations/en.ts #English

OTHER_FILES += \
    readme.md\
    schedule.md\
    $$PWD/../doc/dev_records.md

CONFIG   += ordered
