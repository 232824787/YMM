//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BMKRouteStep : NSObject
{
    int _distance;
    int _duration;
    CDStruct_c3b9c2ee *_points;
    int _pointsCount;
}

@property(nonatomic) int pointsCount; // @synthesize pointsCount=_pointsCount;
@property(nonatomic) CDStruct_c3b9c2ee *points; // @synthesize points=_points;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) int distance; // @synthesize distance=_distance;
- (void)dealloc;
- (id)init;

@end

