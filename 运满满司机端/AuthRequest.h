//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSData, NSString;

@interface AuthRequest : PBGeneratedMessage
{
    unsigned int hasProtoVersion_:1;
    unsigned int hasAuthProto_:1;
    unsigned int hasTimeZone_:1;
    unsigned int hasLanguage_:1;
    unsigned int hasDeviceName_:1;
    unsigned int hasBaseRequest_:1;
    unsigned int hasMd5DeviceTypeAndDeviceId_:1;
    unsigned int hasAesSign_:1;
    unsigned int hasMacAddress_:1;
    unsigned int hasAuthMethod_:1;
    int protoVersion;
    int authProto;
    NSString *timeZone;
    NSString *language;
    NSString *deviceName;
    BaseRequest *baseRequest;
    NSData *md5DeviceTypeAndDeviceId;
    NSData *aesSign;
    NSData *macAddress;
    int authMethod;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseDelimitedFromInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property(retain) NSString *deviceName; // @synthesize deviceName;
@property(retain) NSString *language; // @synthesize language;
@property(retain) NSString *timeZone; // @synthesize timeZone;
@property(retain) NSData *macAddress; // @synthesize macAddress;
@property(retain) NSData *aesSign; // @synthesize aesSign;
@property int authMethod; // @synthesize authMethod;
@property int authProto; // @synthesize authProto;
@property int protoVersion; // @synthesize protoVersion;
@property(retain) NSData *md5DeviceTypeAndDeviceId; // @synthesize md5DeviceTypeAndDeviceId;
@property(retain) BaseRequest *baseRequest; // @synthesize baseRequest;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)defaultInstance;
- (id)init;
- (void)dealloc;
- (void)setHasDeviceName:(_Bool)arg1;
- (_Bool)hasDeviceName;
- (void)setHasLanguage:(_Bool)arg1;
- (_Bool)hasLanguage;
- (void)setHasTimeZone:(_Bool)arg1;
- (_Bool)hasTimeZone;
- (void)setHasMacAddress:(_Bool)arg1;
- (_Bool)hasMacAddress;
- (void)setHasAesSign:(_Bool)arg1;
- (_Bool)hasAesSign;
- (void)setHasAuthMethod:(_Bool)arg1;
- (_Bool)hasAuthMethod;
- (void)setHasAuthProto:(_Bool)arg1;
- (_Bool)hasAuthProto;
- (void)setHasProtoVersion:(_Bool)arg1;
- (_Bool)hasProtoVersion;
- (void)setHasMd5DeviceTypeAndDeviceId:(_Bool)arg1;
- (_Bool)hasMd5DeviceTypeAndDeviceId;
- (void)setHasBaseRequest:(_Bool)arg1;
- (_Bool)hasBaseRequest;

@end

