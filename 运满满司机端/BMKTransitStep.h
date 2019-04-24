//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKRouteStep.h"

@class BMKRouteNode, BMKVehicleInfo, NSString;

@interface BMKTransitStep : BMKRouteStep
{
    BMKRouteNode *_entrace;
    BMKRouteNode *_exit;
    NSString *_instruction;
    int _stepType;
    BMKVehicleInfo *_vehicleInfo;
}

@property(retain, nonatomic) BMKVehicleInfo *vehicleInfo; // @synthesize vehicleInfo=_vehicleInfo;
@property(nonatomic) int stepType; // @synthesize stepType=_stepType;
@property(retain, nonatomic) NSString *instruction; // @synthesize instruction=_instruction;
@property(retain, nonatomic) BMKRouteNode *exit; // @synthesize exit=_exit;
@property(retain, nonatomic) BMKRouteNode *entrace; // @synthesize entrace=_entrace;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

