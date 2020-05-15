//
//  ViewController.h
//  FavoriteArtists
//
//  Created by Shawn Gee on 5/15/20.
//  Copyright © 2020 Swift Student. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LSIArtistController;

@interface LSIArtistDetailViewController : UIViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating>

@property LSIArtistController *artistController;

@end

