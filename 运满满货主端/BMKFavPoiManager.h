//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BMFavorite;

@interface BMKFavPoiManager : NSObject
{
    BMFavorite *_favorite;
}

+ (void)initialize;
- (void).cxx_destruct;
- (_Bool)clearAllFavPois;
- (_Bool)deleteFavPoi:(id)arg1;
- (_Bool)updateFavPoi:(id)arg1 favPoiInfo:(id)arg2;
- (id)getAllFavPois;
- (id)getFavPoi:(id)arg1;
- (long long)addFavPoi:(id)arg1;
- (id)init;

@end

