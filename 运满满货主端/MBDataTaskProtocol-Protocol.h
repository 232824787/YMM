//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, NSURLSessionConfiguration;

@protocol MBDataTaskProtocol <NSObject>

@optional
- (NSURLSessionConfiguration *)ymm_selfDefinedSessionConfiguration;
- (_Bool)ymm_needsOutputLog4Debug;
- (id)ymm_handleResponseObject:(id)arg1;
- (struct NSString *)ymm_contentType;
- (struct NSString *)ymm_httpMethod;
- (Class)ymm_responseModelClass;
- (double)ymm_timeoutInterval;
- (NSString *)ymm_userAgent;
- (NSArray *)ymm_requestIgnoreProperties;
- (NSDictionary *)ymm_propertiesMap;
- (NSDictionary *)ymm_requestBody;
- (NSDictionary *)ymm_requestHeader;
- (NSString *)ymm_networkAPIPathExtension;
- (NSString *)ymm_networkAPIPath;
- (NSString *)ymm_networkAPIDomain;
- (NSDictionary *)ymm_riskInfoParam;
- (long long)ymm_riskStage;
- (_Bool)ymm_needActionResponse;
- (_Bool)ymm_supportDataZip;
- (_Bool)ymm_needEncryption;
- (NSDictionary *)ymm_errorMapping;
@end

