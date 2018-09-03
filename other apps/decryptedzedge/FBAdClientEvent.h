//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface FBAdClientEvent : NSObject
{
    NSString *_name;
    NSDictionary *_data;
    NSNumber *_time;
    NSString *_requestId;
}

@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic, getter=getClientEventDictionary) NSDictionary *clientEventDictionary;
- (id)initWithName:(id)arg1 data:(id)arg2 time:(id)arg3 requestId:(id)arg4;

@end

