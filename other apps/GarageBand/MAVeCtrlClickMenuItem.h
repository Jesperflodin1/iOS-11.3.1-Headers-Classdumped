//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MAVeCtrlClickMenuItem : NSObject
{
    _Bool _selected;
    _Bool _isSeparator;
    _Bool _enabled;
    NSString *_title;
}

+ (id)ctrlClickMenuItemWithTitle:(id)arg1 isSeparator:(_Bool)arg2 enabled:(_Bool)arg3;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool isSeparator; // @synthesize isSeparator=_isSeparator;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
