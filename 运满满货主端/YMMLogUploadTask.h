//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSString;

@interface YMMLogUploadTask : YMMCommonNetworkTask
{
    NSString *_userid;
    NSString *_fileType;
}

@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSString *userid; // @synthesize userid=_userid;
- (void).cxx_destruct;
- (double)ymm_timeoutInterval;
- (_Bool)ymm_needEncryption;
- (int)encryptFlag;
- (id)decryptStr;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIFullPath;

@end

