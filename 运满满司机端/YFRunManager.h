//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDL, YMMFixDBUtils;

@interface YFRunManager : NSObject
{
    MDL *_context;
    YMMFixDBUtils *_db;
}

@property(retain, nonatomic) YMMFixDBUtils *db; // @synthesize db=_db;
@property(retain, nonatomic) MDL *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)fileMD5:(id)arg1;
- (id)AES128Operation:(unsigned int)arg1 key:(id)arg2 iv:(id)arg3 data:(id)arg4;
- (id)AES128CBC_PKCS5Padding_DecryptString:(id)arg1 key:(id)arg2 iv:(id)arg3;
- (void)readCodes:(id)arg1;
- (void)run;
- (void)run:(long long)arg1 version:(long long)arg2;
- (void)notification_run_success:(id)arg1;
- (void)dealloc;
- (id)init;

@end

