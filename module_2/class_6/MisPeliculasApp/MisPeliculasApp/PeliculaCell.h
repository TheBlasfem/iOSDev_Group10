//
//  PeliculaCell.h
//  MisPeliculasApp
//
//  Created by Diego Cruz on 24/03/14.
//  Copyright (c) 2014 Diego Cruz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PeliculaCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *posterView;
@property (weak, nonatomic) IBOutlet UILabel *nombreLabel;
@property (weak, nonatomic) IBOutlet UILabel *anhoLabel;

@end
