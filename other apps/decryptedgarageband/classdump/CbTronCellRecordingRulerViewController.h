//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CADisplayLink, CbTronRulerCellView, DfDocument, NSDate, UIView;

@interface CbTronCellRecordingRulerViewController : UIViewController
{
    int _SPLDataSource;
    DfDocument *_document;
    UIView *_dimView;
    CbTronRulerCellView *_rulerCellView;
    CADisplayLink *_displayLink;
    NSDate *_displayLinkStartTime;
}

+ (struct CGRect)miniCellFrameForBounds:(struct CGRect)arg1;
@property(nonatomic) int SPLDataSource; // @synthesize SPLDataSource=_SPLDataSource;
@property(retain, nonatomic) NSDate *displayLinkStartTime; // @synthesize displayLinkStartTime=_displayLinkStartTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CbTronRulerCellView *rulerCellView; // @synthesize rulerCellView=_rulerCellView;
@property(retain, nonatomic) UIView *dimView; // @synthesize dimView=_dimView;
@property(nonatomic) __weak DfDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)updateSPL;
- (void)_displayLink:(id)arg1;
- (void)_stopOneTimeCycleAnimation;
- (void)_startOneTimeCycleAnimation;
- (void)_updateSPL;
- (void)_handleRecDidStop:(id)arg1;
- (void)_handleRecWillStart:(id)arg1;
- (void)_handleClockChange:(id)arg1;
- (void)_handleMainFolderChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)loadView;
- (id)initWithDocument:(id)arg1;

@end

