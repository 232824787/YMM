//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface AMapNaviIntervalCameraDynamicInfo : NSObject <NSCopying>
{
    long long _length;
    long long _remainDistance;
    long long _averageSpeed;
    long long _reasonableSpeedInRemainDist;
}

@property(nonatomic) long long reasonableSpeedInRemainDist; // @synthesize reasonableSpeedInRemainDist=_reasonableSpeedInRemainDist;
@property(nonatomic) long long averageSpeed; // @synthesize averageSpeed=_averageSpeed;
@property(nonatomic) long long remainDistance; // @synthesize remainDistance=_remainDistance;
@property(nonatomic) long long length; // @synthesize length=_length;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

