//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WLJsBridgeApi.h"

@class NSString;

@interface WLJsFileApi : WLJsBridgeApi
{
    _Bool _needOpen;
    _Bool _disableDelete;
    unsigned long long _fileHandleType;
    NSString *_url;
    NSString *_fileName;
    NSString *_fileType;
    NSString *_downloadStatus;
}

+ (id)parseToApi:(id)arg1;
@property(copy, nonatomic) NSString *downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(nonatomic) _Bool disableDelete; // @synthesize disableDelete=_disableDelete;
@property(nonatomic) _Bool needOpen; // @synthesize needOpen=_needOpen;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long fileHandleType; // @synthesize fileHandleType=_fileHandleType;
- (void).cxx_destruct;

@end

