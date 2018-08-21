/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISearchController.h>

@protocol PSKeyboardNavigationSearchResultsController;
@class UIViewController, PSKeyboardNavigationSearchBar;

@interface PSKeyboardNavigationSearchController : UISearchController {

	UIViewController*<PSKeyboardNavigationSearchResultsController> searchResultsController;
	PSKeyboardNavigationSearchBar* searchBar;

}

@property (nonatomic,retain) PSKeyboardNavigationSearchBar * searchBar; 
@property (nonatomic,retain) UIViewController*<PSKeyboardNavigationSearchResultsController> searchResultsController; 
-(PSKeyboardNavigationSearchBar *)searchBar;
-(UIViewController*<PSKeyboardNavigationSearchResultsController>)searchResultsController;
-(void)setSearchBar:(PSKeyboardNavigationSearchBar *)arg1 ;
-(id)initWithSearchResultsController:(id)arg1 ;
-(void)_escapeKeyPressed;
-(void)_downArrowKeyPressed;
-(void)_upArrowKeyPressed;
-(void)setSearchResultsController:(UIViewController*<PSKeyboardNavigationSearchResultsController>)arg1 ;
@end

