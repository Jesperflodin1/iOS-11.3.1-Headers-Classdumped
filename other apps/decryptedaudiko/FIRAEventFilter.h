//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface FIRAEventFilter : NSObject
{
    int _audienceID;
    int _filterID;
    NSString *_eventName;
    NSData *_data;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(readonly, nonatomic) int filterID; // @synthesize filterID=_filterID;
@property(readonly, nonatomic) int audienceID; // @synthesize audienceID=_audienceID;
- (void).cxx_destruct;
- (id)initWithAudienceID:(int)arg1 filterID:(int)arg2 eventName:(id)arg3 data:(id)arg4;

@end

