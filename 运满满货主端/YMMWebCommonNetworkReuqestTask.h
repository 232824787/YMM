//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSDictionary, NSString;

@interface YMMWebCommonNetworkReuqestTask : YMMCommonNetworkTask
{
    NSString *_url;
    NSString *_method;
    NSDictionary *_data;
    NSDictionary *_headers;
}

@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)showLogForRequestBodyUnCrypt:(id)arg1;
- (_Bool)ymm_jsbridgeNetWork;
- (_Bool)ymm_needEncryption;
- (Class)ymm_responseModelClass;
- (id)ymm_requestIgnoreProperties;
- (id)ymm_httpMethod;
- (id)ymm_requestBody;
- (id)ymm_requestHeader;
- (id)ymm_networkAPIPath;
- (id)ymm_networkAPIFullPath;

@end

