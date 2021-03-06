//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, NSTimer, UILabel, UIPageControl;
@protocol GAmpDesignerChessboardAmpDescriptionUser;

@interface GAmpDesignerChessboardAmpDescriptionViewController : UIViewController
{
    int _phase;
    NSDictionary *_assets;
    unsigned long long _currentPage;
    double _duration;
    id <GAmpDesignerChessboardAmpDescriptionUser> _user;
    UILabel *_label;
    UIPageControl *_pageControl;
    NSTimer *_timer;
    struct CGPoint _position;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) int phase; // @synthesize phase=_phase;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) id <GAmpDesignerChessboardAmpDescriptionUser> user; // @synthesize user=_user;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSDictionary *assets; // @synthesize assets=_assets;
- (void)timerDidFire:(id)arg1;
- (void)showView;
- (void)hideViewAnimated:(_Bool)arg1;
- (void)pageChanged:(id)arg1;
@property(nonatomic) unsigned long long numberOfPages;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

