//
//  DMNPlaylistDetailViewController.h
//  PlaylistObjC
//
//  Created by Bradley GIlmore on 5/1/17.
//  Copyright © 2017 Bradley Gilmore. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DMNPlaylist.h"

@interface DMNPlaylistDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) DMNPlaylist *playlist;


@end
