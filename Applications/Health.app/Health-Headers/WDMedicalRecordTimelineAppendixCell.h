//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDMedicalRecordGroupableCell.h"

@class NSString, UILabel;

@interface WDMedicalRecordTimelineAppendixCell : WDMedicalRecordGroupableCell
{
    NSString *_title;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_titleLabelFont;
- (void)setupSubviews;

@end
