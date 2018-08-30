//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@class UITouch;
@protocol CbSmartStringsDatasourceProtocol;

@interface CbPizzicatoRecognizer : UITapGestureRecognizer
{
    unsigned long long _stringIndex;
    unsigned long long _fretIndex;
    UITouch *_trackedTouch;
    struct CGPoint _initialLocation;
    id <CbSmartStringsDatasourceProtocol> _dataSource;
}

@property __weak id <CbSmartStringsDatasourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct CGPoint initialLocation; // @synthesize initialLocation=_initialLocation;
@property(retain, nonatomic) UITouch *trackedTouch; // @synthesize trackedTouch=_trackedTouch;
@property(nonatomic) unsigned long long fretIndex; // @synthesize fretIndex=_fretIndex;
@property(nonatomic) unsigned long long stringIndex; // @synthesize stringIndex=_stringIndex;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
