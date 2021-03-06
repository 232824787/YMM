//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MBBlockBody, MBClassDefinition, MBScopeChain, MBStack, NSMutableArray, NSMutableDictionary;

@interface MBInterpreter : NSObject
{
    unsigned long long _currentLineNumber;
    NSMutableDictionary *_structDeclareDic;
    NSMutableDictionary *_classDefinitionDic;
    NSMutableArray *_topList;
    MBClassDefinition *_currentClassDefinition;
    MBBlockBody *_currentBlock;
    MBScopeChain *_topScope;
    MBScopeChain *_commonScope;
    MBStack *_stack;
}

@property(retain, nonatomic) MBStack *stack; // @synthesize stack=_stack;
@property(retain, nonatomic) MBScopeChain *commonScope; // @synthesize commonScope=_commonScope;
@property(retain, nonatomic) MBScopeChain *topScope; // @synthesize topScope=_topScope;
@property(retain, nonatomic) MBBlockBody *currentBlock; // @synthesize currentBlock=_currentBlock;
@property(retain, nonatomic) MBClassDefinition *currentClassDefinition; // @synthesize currentClassDefinition=_currentClassDefinition;
@property(retain, nonatomic) NSMutableArray *topList; // @synthesize topList=_topList;
@property(retain, nonatomic) NSMutableDictionary *classDefinitionDic; // @synthesize classDefinitionDic=_classDefinitionDic;
@property(retain, nonatomic) NSMutableDictionary *structDeclareDic; // @synthesize structDeclareDic=_structDeclareDic;
@property(nonatomic) unsigned long long currentLineNumber; // @synthesize currentLineNumber=_currentLineNumber;
- (void).cxx_destruct;
- (void)addEnums:(id)arg1;
- (void)compileSoruceWithString:(id)arg1;
- (void)compileSoruceWithURL:(id)arg1;
- (id)init;

@end

