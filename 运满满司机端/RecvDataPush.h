//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BasePush, NSData;

@interface RecvDataPush : PBGeneratedMessage
{
    unsigned int hasBasePush_:1;
    unsigned int hasDatatosend_:1;
    unsigned int hasType_:1;
    BasePush *basePush;
    NSData *datatosend;
    int type;
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
@property int type; // @synthesize type;
@property(retain) NSData *datatosend; // @synthesize datatosend;
@property(retain) BasePush *basePush; // @synthesize basePush;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)defaultInstance;
- (id)init;
- (void)dealloc;
- (void)setHasType:(_Bool)arg1;
- (_Bool)hasType;
- (void)setHasDatatosend:(_Bool)arg1;
- (_Bool)hasDatatosend;
- (void)setHasBasePush:(_Bool)arg1;
- (_Bool)hasBasePush;

@end

