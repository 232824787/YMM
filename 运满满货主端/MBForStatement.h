//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBStatement.h"

@class MBBlockBody, MBDeclaration, MBExpression;

@interface MBForStatement : MBStatement
{
    MBExpression *_initializerExpr;
    MBDeclaration *_declaration;
    MBExpression *_condition;
    MBExpression *_post;
    MBBlockBody *_block;
}

@property(retain, nonatomic) MBBlockBody *block; // @synthesize block=_block;
@property(retain, nonatomic) MBExpression *post; // @synthesize post=_post;
@property(retain, nonatomic) MBExpression *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) MBDeclaration *declaration; // @synthesize declaration=_declaration;
@property(retain, nonatomic) MBExpression *initializerExpr; // @synthesize initializerExpr=_initializerExpr;
- (void).cxx_destruct;

@end

