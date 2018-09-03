//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImage, UIImageView, UILabel;

@interface CbSIIMChordsNotesSwitch : UIControl
{
    UIImage *_switchImageChords;
    UIImage *_switchImageNotes;
    long long _currentState;
    _Bool _labelsBehindImage;
    UIImageView *_backgroundImageView;
    UIImageView *_switchImageView;
    UILabel *_chordsLabel;
    UILabel *_notesLabel;
}

@property(nonatomic) _Bool labelsBehindImage; // @synthesize labelsBehindImage=_labelsBehindImage;
@property(retain, nonatomic) UILabel *notesLabel; // @synthesize notesLabel=_notesLabel;
@property(retain, nonatomic) UILabel *chordsLabel; // @synthesize chordsLabel=_chordsLabel;
@property __weak UIImageView *switchImageView; // @synthesize switchImageView=_switchImageView;
@property __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImage *switchImageNotes; // @synthesize switchImageNotes=_switchImageNotes;
@property(retain, nonatomic) UIImage *switchImageChords; // @synthesize switchImageChords=_switchImageChords;
- (void).cxx_destruct;
- (void)toggle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property long long currentState;

@end

