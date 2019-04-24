//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, PBEnumValueOptions;

@interface PBEnumValueDescriptorProto : PBGeneratedMessage
{
    unsigned int hasNumber_:1;
    unsigned int hasName_:1;
    unsigned int hasOptions_:1;
    int number;
    NSString *name;
    PBEnumValueOptions *options;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property(retain) PBEnumValueOptions *options; // @synthesize options;
@property int number; // @synthesize number;
@property(retain) NSString *name; // @synthesize name;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)defaultInstance;
- (id)init;
- (void)dealloc;
- (void)setHasOptions:(_Bool)arg1;
- (_Bool)hasOptions;
- (void)setHasNumber:(_Bool)arg1;
- (_Bool)hasNumber;
- (void)setHasName:(_Bool)arg1;
- (_Bool)hasName;

@end

