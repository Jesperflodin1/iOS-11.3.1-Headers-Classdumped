//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TabOverview, TabOverviewItemLayoutInfo;

@interface TabOverviewItem : NSObject
{
    _Bool _hidden;
    _Bool _recording;
    _Bool _usesDarkTheme;
    _Bool _closing;
    NSString *_title;
    TabOverviewItemLayoutInfo *_layoutInfo;
    TabOverview *_tabOverview;
}

@property(nonatomic) __weak TabOverview *tabOverview; // @synthesize tabOverview=_tabOverview;
@property(retain, nonatomic) TabOverviewItemLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(nonatomic) _Bool closing; // @synthesize closing=_closing;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;

@end

