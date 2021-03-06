//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAShape.h"

#import "MAOverlay.h"

@class NSArray, NSString;

@interface MACircle : MAShape <MAOverlay>
{
    struct MAMapRect _boundingMapRect;
    NSArray *_origHollowShapes;
    double _radius;
    struct MAMapPoint *_mapPoints;
    unsigned long long _pointsCount;
    NSArray *_hollowShapes;
    struct CLLocationCoordinate2D _coordinate;
}

+ (id)circleWithMapRect:(struct MAMapRect)arg1;
+ (id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
@property(retain, nonatomic) NSArray *hollowShapes; // @synthesize hollowShapes=_hollowShapes;
@property(nonatomic) unsigned long long pointsCount; // @synthesize pointsCount=_pointsCount;
@property(nonatomic) struct MAMapPoint *mapPoints; // @synthesize mapPoints=_mapPoints;
@property(nonatomic) struct MAMapRect boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (_Bool)canAddHollowShape:(id)arg1;
- (_Bool)setCircleWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (void)MACircleDeallocOperation;
- (void)dealloc;
- (id)initWithWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (void)rebuildOutline;
- (void)calculateBoundingMapRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

