//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBReqRecord, HCBRequest, NSString;

@interface HCBMonitor_Qos : NSObject
{
    NSString *_moduleName;
    NSString *_method;
    NSString *_uuid;
    NSString *_url;
    NSString *_scheme;
    NSString *_host;
    NSString *_proxy;
    NSString *_api;
    NSString *_httpCode;
    NSString *_params;
    NSString *_status;
    NSString *_serverErrorCode;
    NSString *_serverErrorMsg;
    NSString *_exception;
    NSString *_exceptionCode;
    long long _response_time;
    _Bool _result;
    HCBRequest *_request;
    HCBReqRecord *_record;
}

@property(readonly, nonatomic) HCBReqRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) HCBRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) _Bool result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)filteredApi:(id)arg1;
- (void)monitorMetric;
- (void)monitorLog;
- (_Bool)canMonitor;
- (void)monitor;
- (id)initWithRequest:(id)arg1 record:(id)arg2 result:(_Bool)arg3;

@end

