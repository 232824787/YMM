//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapRESTRequestReformer.h"

@class NSDictionary, NSString;

@interface MAEnInlandMapTileOverlayRequestReformer : AMapRESTRequestReformer
{
    NSDictionary *_parameter;
    NSString *_randomBaseURL;
}

- (void).cxx_destruct;
- (id)parameters;
- (id)URLPath;
- (id)baseURL;
- (id)method;
- (id)initWithTileOverlayPath:(struct MATileOverlayPath)arg1 language:(id)arg2;

@end

