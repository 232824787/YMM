//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSFileManager, NSObject<OS_dispatch_group>, NSString;

@interface YMMRNFileManager : NSObject
{
    NSObject<OS_dispatch_group> *zipGroup;
    _Bool _isRNUpdating;
    NSArray *_bundlesVersions;
    NSString *_reactNativeRootFilePath;
    NSString *_currentPackFilePath;
    NSString *_lastPackFilePath;
    NSString *_tmpZipFilePath;
    NSString *_versionFilePath;
    NSString *_lastVersionFilePath;
    NSArray *_lastBundlesVersions;
    NSFileManager *_fileManager;
}

+ (void)startLoadReactNative;
+ (id)sharedManager;
@property(nonatomic) _Bool isRNUpdating; // @synthesize isRNUpdating=_isRNUpdating;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSArray *lastBundlesVersions; // @synthesize lastBundlesVersions=_lastBundlesVersions;
@property(retain, nonatomic) NSString *lastVersionFilePath; // @synthesize lastVersionFilePath=_lastVersionFilePath;
@property(retain, nonatomic) NSString *versionFilePath; // @synthesize versionFilePath=_versionFilePath;
@property(retain, nonatomic) NSString *tmpZipFilePath; // @synthesize tmpZipFilePath=_tmpZipFilePath;
@property(retain, nonatomic) NSString *lastPackFilePath; // @synthesize lastPackFilePath=_lastPackFilePath;
@property(retain, nonatomic) NSString *currentPackFilePath; // @synthesize currentPackFilePath=_currentPackFilePath;
@property(retain, nonatomic) NSString *reactNativeRootFilePath; // @synthesize reactNativeRootFilePath=_reactNativeRootFilePath;
@property(retain, nonatomic) NSArray *bundlesVersions; // @synthesize bundlesVersions=_bundlesVersions;
- (void).cxx_destruct;
- (void)addJournalForRNUpdate:(_Bool)arg1 errorInfo:(id)arg2 function:(id)arg3;
- (void)addJournalForRNUpdate:(_Bool)arg1 error:(id)arg2 function:(id)arg3;
- (long long)timeIntervalOfReqeustUpdate;
- (id)appVersion;
- (id)fileMD5:(id)arg1;
- (id)jsonWithFilePath:(id)arg1;
- (void)saveJSON:(id)arg1 toPath:(id)arg2;
- (_Bool)checkExistsSimilarFile:(id)arg1 fileInfo:(id)arg2;
- (_Bool)checkExistsFile:(id)arg1;
- (void)deleteFileWithName:(id)arg1;
- (void)removeItemAtPath:(id)arg1;
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (_Bool)createDirectoryAtPath:(id)arg1;
- (id)moduleInfo:(id)arg1;
- (id)getModuleVersionFromVersionList:(id)arg1 moduleName:(id)arg2;
- (id)updateVersionList:(id)arg1 moduleName:(id)arg2 withNewVersion:(id)arg3;
- (void)updateModule:(id)arg1 newVersion:(id)arg2;
- (void)updateVersionInfo;
- (void)localPatchUpdateWithPatchModel:(id)arg1;
- (void)localFullUpdateWithPatchModel:(id)arg1;
- (void)checkUpdateSuccess:(id)arg1;
- (void)checkFileShouldUpdate;
- (_Bool)checkIfNeedRequestUpdateRN;
- (void)setUpdateRNDate:(id)arg1;
- (id)lastUpdateRNDate;
- (void)copyBundleResourceToSandox;
- (_Bool)checkIfNeedUnpackBundlesZip;
- (void)checkBundleResourceCopyFinish;
- (void)startLoadReactNative;
- (id)init;

@end

