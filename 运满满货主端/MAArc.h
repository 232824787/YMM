//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAShape.h"

#import "MAOverlay.h"

@class NSString;

@interface MAArc : MAShape <MAOverlay>
{
    double _circleCenterX;
    double _circleCenterY;
    double _circleRadius;
    double _startCircleAngle;
    double _passedCircleAngle;
    double _endCircleAngle;
    struct MAMapPoint *_mapPoints;
    unsigned long long _pointsCount;
    struct CLLocationCoordinate2D _startCoordinate;
    struct CLLocationCoordinate2D _passedCoordinate;
    struct CLLocationCoordinate2D _endCoordinate;
    struct MAMapRect _boundingMapRect;
}

+ (id)arcWithStartCoordinate:(struct CLLocationCoordinate2D)arg1 passedCoordinate:(struct CLLocationCoordinate2D)arg2 endCoordinate:(struct CLLocationCoordinate2D)arg3;
@property(nonatomic) unsigned long long pointsCount; // @synthesize pointsCount=_pointsCount;
@property(nonatomic) struct MAMapPoint *mapPoints; // @synthesize mapPoints=_mapPoints;
@property(nonatomic) struct MAMapRect boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(nonatomic) struct CLLocationCoordinate2D endCoordinate; // @synthesize endCoordinate=_endCoordinate;
@property(nonatomic) struct CLLocationCoordinate2D passedCoordinate; // @synthesize passedCoordinate=_passedCoordinate;
@property(nonatomic) struct CLLocationCoordinate2D startCoordinate; // @synthesize startCoordinate=_startCoordinate;
- (void)MAArcDeallocOperation;
- (void)dealloc;
- (id)initWithStartCoordinate:(struct CLLocationCoordinate2D)arg1 passedCoordinate:(struct CLLocationCoordinate2D)arg2 endCoordinate:(struct CLLocationCoordinate2D)arg3;
- (struct MAMapPoint)mapPointAtDegree:(double)arg1 onCircleCenterX:(double)arg2 centerY:(double)arg3 radius:(double)arg4;
- (double)angleForMapPointX:(double)arg1 mapPointY:(double)arg2 onCircleCenterX:(double)arg3 centerY:(double)arg4;
- (void)calculateCircleWithStartMapPoint:(struct MAMapPoint)arg1 passedMapPoint:(struct MAMapPoint)arg2 endMapPoint:(struct MAMapPoint)arg3;
- (_Bool)isCollinearForStartCoordinate:(struct CLLocationCoordinate2D)arg1 passedCoordinate:(struct CLLocationCoordinate2D)arg2 endCoordinate:(struct CLLocationCoordinate2D)arg3;
- (void)reset;
- (void)rebuildOutline;
- (void)calculateBoundingMapRect;

// Remaining properties
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

