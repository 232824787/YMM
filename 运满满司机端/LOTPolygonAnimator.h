//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LOTAnimatorNode.h"

@class LOTNumberInterpolator, LOTPointInterpolator;

@interface LOTPolygonAnimator : LOTAnimatorNode
{
    LOTNumberInterpolator *_outerRadiusInterpolator;
    LOTNumberInterpolator *_outerRoundnessInterpolator;
    LOTPointInterpolator *_positionInterpolator;
    LOTNumberInterpolator *_pointsInterpolator;
    LOTNumberInterpolator *_rotationInterpolator;
}

- (void).cxx_destruct;
- (void)performLocalUpdate;
- (_Bool)needsUpdateForFrame:(id)arg1;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)arg1 shapePolygon:(id)arg2;

@end

