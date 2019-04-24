//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TencentBaseMessageObj.h"

@class NSData, NSString;

@interface TencentVideoMessageV1 : TencentBaseMessageObj
{
    NSString *_sUrl;
    long long _nType;
    NSData *_dataImagePreview;
    NSString *_sImagePreviewUrl;
    NSString *_sDescription;
}

@property(retain, nonatomic) NSString *sDescription; // @synthesize sDescription=_sDescription;
@property(retain, nonatomic) NSString *sImagePreviewUrl; // @synthesize sImagePreviewUrl=_sImagePreviewUrl;
@property(retain, nonatomic) NSData *dataImagePreview; // @synthesize dataImagePreview=_dataImagePreview;
@property(readonly, nonatomic) long long nType; // @synthesize nType=_nType;
@property(retain, nonatomic) NSString *sUrl; // @synthesize sUrl=_sUrl;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isVaild;
- (id)initWithType:(int)arg1;
- (id)initWithVideoUrl:(id)arg1 type:(int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

