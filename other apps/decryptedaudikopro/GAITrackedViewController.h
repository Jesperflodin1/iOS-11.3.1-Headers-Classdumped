//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString;
@protocol GAITracker;

@interface GAITrackedViewController : UIViewController
{
    id <GAITracker> _tracker;
    NSString *_screenName;
}

@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(nonatomic) id <GAITracker> tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;

@end

