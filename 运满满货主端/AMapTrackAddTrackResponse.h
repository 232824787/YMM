//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapTrackBaseResponse.h"

@class NSString;

@interface AMapTrackAddTrackResponse : AMapTrackBaseResponse
{
    NSString *_trackID;
    NSString *_trackName;
}

+ (id)ajo_mapping;
@property(retain, nonatomic) NSString *trackName; // @synthesize trackName=_trackName;
@property(retain, nonatomic) NSString *trackID; // @synthesize trackID=_trackID;
- (void).cxx_destruct;
- (id)init;

@end

