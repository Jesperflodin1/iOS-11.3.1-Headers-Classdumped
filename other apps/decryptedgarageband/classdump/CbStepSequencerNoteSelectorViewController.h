//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CbStepSequencerNoteSelectorCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class CbStepSequencerNoteModel, NSMutableArray, NSString, UICollectionView;
@protocol CbStepSequencerNoteSelectorDelegate;

@interface CbStepSequencerNoteSelectorViewController : UIViewController <CbStepSequencerNoteSelectorCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <CbStepSequencerNoteSelectorDelegate> _delegate;
    NSMutableArray *_noteModels;
    unsigned long long _rowIndex;
    CbStepSequencerNoteModel *_selectedNoteModel;
}

- (void).cxx_destruct;
- (struct CGSize)preferredSize;
- (id)cellReuseIdentifier;
- (double)cellWidth;
- (Class)cellClass;
- (id)noteModelForIndexPath:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)didTapPreviewButtonForNoteModel:(id)arg1;
- (id)backgroundColorForPopover;
- (void)updatePreferredSize;
- (void)setNoteModels:(id)arg1 rowIndex:(unsigned long long)arg2 selectedNoteModel:(id)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

