//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (AMapJsonSerialization)
- (id)amf_serializeJsonArrayForInfo:(id)arg1;
- (id)amf_serializeJsonVaule:(id)arg1 canManual:(_Bool)arg2 forInfo:(id)arg3;
- (id)amf_serializeJsonObject:(id)arg1 forInfo:(id)arg2;
- (id)amf_serializeJsonObjectForInfo:(id)arg1;
- (void)amf_deserializationJsonArray:(id)arg1 toArray:(id)arg2 forClassName:(id)arg3 forInfo:(id)arg4;
- (void)amf_deserializationJsonData:(id)arg1 forInfo:(id)arg2;
@end

