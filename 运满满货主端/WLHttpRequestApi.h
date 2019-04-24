//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WLJsBridgeApi.h"

@class NSDictionary, NSString;

@interface WLHttpRequestApi : WLJsBridgeApi
{
    _Bool _needEncrypt;
    _Bool _needSession;
    NSString *_api;
    NSString *_host;
    NSDictionary *_params;
    NSDictionary *_headers;
    NSString *_onSendCallback;
    NSString *_successCallback;
    NSString *_serverErrorCallback;
    NSString *_statusErrorCallback;
}

+ (id)parseToApi:(id)arg1;
@property(retain, nonatomic) NSString *statusErrorCallback; // @synthesize statusErrorCallback=_statusErrorCallback;
@property(retain, nonatomic) NSString *serverErrorCallback; // @synthesize serverErrorCallback=_serverErrorCallback;
@property(retain, nonatomic) NSString *successCallback; // @synthesize successCallback=_successCallback;
@property(retain, nonatomic) NSString *onSendCallback; // @synthesize onSendCallback=_onSendCallback;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic, getter=isNeedSession) _Bool needSession; // @synthesize needSession=_needSession;
@property(nonatomic, getter=isNeedEncrypt) _Bool needEncrypt; // @synthesize needEncrypt=_needEncrypt;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *api; // @synthesize api=_api;
- (void).cxx_destruct;

@end

