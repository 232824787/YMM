//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKMultiPoint.h"

#import "BMKOverlay.h"

@class NSString;

@interface BMKArcline : BMKMultiPoint <BMKOverlay>
{
    CDStruct_02837cd9 _boundingMapRect;
    _Bool isYouArc;
}

+ (id)arclineWithCoordinates:(struct CLLocationCoordinate2D *)arg1;
+ (id)arclineWithPoints:(CDStruct_c3b9c2ee *)arg1;
+ (_Bool)validateInputCoordPoints:(struct CLLocationCoordinate2D *)arg1;
+ (_Bool)validateInputPoints:(CDStruct_c3b9c2ee *)arg1;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
- (_Bool)isYouArcWithArcPoint:(CDStruct_c3b9c2ee *)arg1 andCenterPoint:(CDStruct_c3b9c2ee)arg2 andRadius:(float)arg3;
- (float)calcArcWithArcPoint:(CDStruct_c3b9c2ee *)arg1 andCenterPoint:(CDStruct_c3b9c2ee)arg2 andRadius:(float)arg3;
- (float)calcArcRadiusWithArcPoint:(CDStruct_c3b9c2ee)arg1 andCenterPoint:(CDStruct_c3b9c2ee)arg2;
- (CDStruct_c3b9c2ee *)calcArcCenterWithPoints:(CDStruct_c3b9c2ee *)arg1;
- (void)dealloc;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (_Bool)setArclineWithCoordinates:(struct CLLocationCoordinate2D *)arg1;
- (_Bool)setArclineWithPoints:(CDStruct_c3b9c2ee *)arg1;
- (id)initWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)pointCount;
- (CDStruct_c3b9c2ee *)points;

// Remaining properties
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

