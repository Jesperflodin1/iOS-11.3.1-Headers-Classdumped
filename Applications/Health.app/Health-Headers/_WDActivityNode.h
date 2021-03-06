//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMapTable, NSMutableDictionary;

@interface _WDActivityNode : NSObject
{
    id <WDUserActivityResponder> _responder;
    id <WDUserActivityResponder> _nextResponder;
    NSMutableDictionary *_responderActivity;
    NSDictionary *_nextResponderActivity;
    NSMapTable *_responderTable;
}

- (void).cxx_destruct;
- (void)_removeChildBreadcrumbs;
- (id)_nextNode;
- (id)responder;
- (void)addActivitiesToArray:(id)arg1 currentNode:(id)arg2;
- (id)transitionActivityForResponder:(id)arg1 newResponder:(id)arg2 transitionDictionary:(id)arg3;
- (id)changeActivityForResponder:(id)arg1 activityDictionary:(id)arg2;
- (id)initWithResponder:(id)arg1;

@end

