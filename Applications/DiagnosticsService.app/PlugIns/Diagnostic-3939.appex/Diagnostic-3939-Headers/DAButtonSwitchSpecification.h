//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DASpecification.h"

@class DAAsset;

@interface DAButtonSwitchSpecification : DASpecification
{
    DAAsset *_asset;
    struct CGRect _position;
}

@property(retain, nonatomic) DAAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) struct CGRect position; // @synthesize position=_position;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
