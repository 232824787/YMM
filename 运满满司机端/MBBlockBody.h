//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface MBBlockBody : NSObject
{
    NSArray *_statementList;
    NSMutableArray *_declarations;
    MBBlockBody *_outBlock;
}

@property(nonatomic) __weak MBBlockBody *outBlock; // @synthesize outBlock=_outBlock;
@property(retain, nonatomic) NSMutableArray *declarations; // @synthesize declarations=_declarations;
@property(retain, nonatomic) NSArray *statementList; // @synthesize statementList=_statementList;
- (void).cxx_destruct;

@end

