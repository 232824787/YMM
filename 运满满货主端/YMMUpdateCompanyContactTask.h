//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPublishCommonNetworkTask.h"

@class NSNumber, NSString;

@interface YMMUpdateCompanyContactTask : YMMPublishCommonNetworkTask
{
    NSString *_imgUrl;
    NSNumber *_companyId;
    NSString *_companyName;
    NSNumber *_contactId;
    NSString *_contactName;
    NSString *_contactTel;
}

@property(copy, nonatomic) NSString *contactTel; // @synthesize contactTel=_contactTel;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) NSNumber *contactId; // @synthesize contactId=_contactId;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(retain, nonatomic) NSNumber *companyId; // @synthesize companyId=_companyId;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

