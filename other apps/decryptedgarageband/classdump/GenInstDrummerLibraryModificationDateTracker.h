//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface GenInstDrummerLibraryModificationDateTracker : NSObject
{
    NSArray *_urls;
    NSMutableDictionary *_modificationDatesForURLs;
}

@property(retain) NSMutableDictionary *modificationDatesForURLs; // @synthesize modificationDatesForURLs=_modificationDatesForURLs;
@property(retain) NSArray *urls; // @synthesize urls=_urls;
- (id)modifiedURLs;
- (void)updateModificationDates;
- (id)getModificationDatesForURLs;
- (void)dealloc;
- (id)initWithURLs:(id)arg1;

@end

