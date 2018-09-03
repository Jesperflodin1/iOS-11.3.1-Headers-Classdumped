//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SegmentProxy : NSObject
{
    struct {
        unsigned int isMouseOver:1;
        unsigned int isPressed:1;
        unsigned int isEnabled:1;
    } _segmentFlags;
    NSMutableDictionary *_proxiedObjects;
    double _preferredMinimumWidth;
    double _preferredMinimumHeight;
}

@property(nonatomic) double preferredMinimumHeight; // @synthesize preferredMinimumHeight=_preferredMinimumHeight;
@property(nonatomic) double preferredMinimumWidth; // @synthesize preferredMinimumWidth=_preferredMinimumWidth;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)enabled;
@property(nonatomic) _Bool pressed;
@property(nonatomic) _Bool mouseOver;
@property(retain, nonatomic) id proxiedObject;
- (void)setProxiedObject:(id)arg1 forKey:(id)arg2;
- (id)proxiedObjectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

