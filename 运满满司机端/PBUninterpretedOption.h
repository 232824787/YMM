//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSMutableArray, NSString;

@interface PBUninterpretedOption : PBGeneratedMessage
{
    unsigned int hasDoubleValue_:1;
    unsigned int hasNegativeIntValue_:1;
    unsigned int hasPositiveIntValue_:1;
    unsigned int hasIdentifierValue_:1;
    unsigned int hasStringValue_:1;
    double doubleValue;
    long long negativeIntValue;
    long long positiveIntValue;
    NSString *identifierValue;
    NSData *stringValue;
    NSMutableArray *mutableNameList;
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
@property(retain) NSData *stringValue; // @synthesize stringValue;
@property double doubleValue; // @synthesize doubleValue;
@property long long negativeIntValue; // @synthesize negativeIntValue;
@property long long positiveIntValue; // @synthesize positiveIntValue;
@property(retain) NSString *identifierValue; // @synthesize identifierValue;
@property(retain) NSMutableArray *mutableNameList; // @synthesize mutableNameList;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)nameAtIndex:(int)arg1;
- (id)nameList;
- (id)defaultInstance;
- (id)init;
- (void)dealloc;
- (void)setHasStringValue:(_Bool)arg1;
- (_Bool)hasStringValue;
- (void)setHasDoubleValue:(_Bool)arg1;
- (_Bool)hasDoubleValue;
- (void)setHasNegativeIntValue:(_Bool)arg1;
- (_Bool)hasNegativeIntValue;
- (void)setHasPositiveIntValue:(_Bool)arg1;
- (_Bool)hasPositiveIntValue;
- (void)setHasIdentifierValue:(_Bool)arg1;
- (_Bool)hasIdentifierValue;

@end

