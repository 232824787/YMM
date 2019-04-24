//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LocalMapImport;

@interface LocalMap : NSObject
{
    _Bool hadCreatedFirstMapControl;
    id <LocalMapDelegate> _delegate;
    LocalMapImport *_localMapImport;
}

+ (void)releaseLocalMapInstance;
+ (id)getLocalMapInstance;
@property(retain, nonatomic) LocalMapImport *localMapImport; // @synthesize localMapImport=_localMapImport;
@property(nonatomic) __weak id <LocalMapDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getMapCityInfo;
- (_Bool)noDeleteImportFailLocalMap;
- (_Bool)deleteImportFailLocalMap;
- (_Bool)ingoreImportLocalMap;
- (_Bool)startImportLocalMap;
- (_Bool)getAllDownLoadCityInfo:(id)arg1;
- (_Bool)getSearchCitiesInfo:(id)arg1 withKey:(id)arg2;
- (_Bool)getHotCityInfo:(id)arg1;
- (_Bool)getAllChineseCityInfo:(id)arg1;
- (_Bool)getLocalMapInfo:(int)arg1 mapInfo:(id)arg2;
- (_Bool)removeAll;
- (_Bool)remove:(int)arg1;
- (_Bool)stopAll:(int)arg1;
- (_Bool)stop:(int)arg1;
- (_Bool)startAll:(int)arg1;
- (_Bool)start:(int)arg1;
- (_Bool)updateAll;
- (_Bool)update:(int)arg1;
- (_Bool)add:(int)arg1;
- (int)onAppDataOK:(int)arg1 messageParams:(int)arg2;
- (void)offlineMapDownLoadedHandler:(id)arg1;
- (void)onMsgProc:(int)arg1 resultType:(int)arg2 messageParams:(int)arg3;
- (void)onEngineMessage:(id)arg1;
- (struct IVMapbaseInterface *)getMapControlForOffline;
- (void)dealloc;
- (id)init;

@end

