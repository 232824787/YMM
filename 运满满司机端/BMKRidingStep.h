//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKRouteStep.h"

@class BMKRouteNode, NSString;

@interface BMKRidingStep : BMKRouteStep
{
    long long _direction;
    BMKRouteNode *_entrace;
    NSString *_entraceInstruction;
    BMKRouteNode *_exit;
    NSString *_exitInstruction;
    NSString *_instruction;
}

@property(retain, nonatomic) NSString *instruction; // @synthesize instruction=_instruction;
@property(retain, nonatomic) NSString *exitInstruction; // @synthesize exitInstruction=_exitInstruction;
@property(retain, nonatomic) BMKRouteNode *exit; // @synthesize exit=_exit;
@property(retain, nonatomic) NSString *entraceInstruction; // @synthesize entraceInstruction=_entraceInstruction;
@property(retain, nonatomic) BMKRouteNode *entrace; // @synthesize entrace=_entrace;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (id)init;

@end

